//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SCLogoutInterceptor <NSObject>
- (void)interceptLogoutWithCompletionBlock:(void (^)(_Bool))arg1 uiContainer:(id <SCUIContainer>)arg2;

@optional
- (void)setPreviousViewCount:(long long)arg1;
@end

