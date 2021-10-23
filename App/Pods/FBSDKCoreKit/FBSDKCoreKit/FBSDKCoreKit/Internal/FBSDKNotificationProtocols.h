// Copyright (c) 2014-present, Facebook, Inc. All rights reserved.
//
// You are hereby granted a non-exclusive, worldwide, royalty-free license to use,
// copy, modify, and distribute this software in source code or binary form for use
// in connection with the web services and APIs provided by Facebook.
//
// As with any software that integrates with the Facebook platform, your use of
// this software is subject to the Facebook Developer Principles and Policies
// [http://developers.facebook.com/policy/]. This copyright notice shall be
// included in all copies or substantial portions of the software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// An internal protocol used to describe a type that can post a notification
NS_SWIFT_NAME(NotificationPosting)
@protocol FBSDKNotificationPosting

- (void)postNotificationName:(NSNotificationName)aName
                      object:(nullable id)anObject
                    userInfo:(nullable NSDictionary *)aUserInfo
NS_SWIFT_NAME(post(name:object:userInfo:));

@end

/// An internal protocol used to describe a type that can observe a notification
NS_SWIFT_NAME(NotificationObserving)
@protocol FBSDKNotificationObserving

- (void)addObserver:(id)observer
           selector:(SEL)aSelector
               name:(nullable NSNotificationName)aName
             object:(nullable id)anObject;

- (void)removeObserver:(id)observer;

@end

NS_ASSUME_NONNULL_END
