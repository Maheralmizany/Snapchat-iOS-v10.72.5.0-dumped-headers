//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SCContextV2ImpalaHandler <NSObject>
- (void)shareImpalaProfileID:(NSString *)arg1;
- (void)reportImpalaProfileID:(NSString *)arg1 completion:(void (^)(_Bool))arg2;
- (void)setSubscribed:(_Bool)arg1 toProfileID:(NSString *)arg2 completion:(void (^)(_Bool))arg3;
- (_Bool)isSubscribedToImpalaProfileID:(NSString *)arg1;
@end
