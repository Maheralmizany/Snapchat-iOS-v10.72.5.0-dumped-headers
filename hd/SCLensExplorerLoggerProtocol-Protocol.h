//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString;

@protocol SCLensExplorerLoggerProtocol <NSObject>
@property(readonly, nonatomic) id <SCLensExplorerLoggerUtils> loggingUtils;
- (NSString *)lensExplorerStudySettings;
- (void)flushWithDate:(NSDate *)arg1 completion:(void (^)(void))arg2 extraData:(NSDictionary *)arg3;
- (void)logEvent:(NSString *)arg1 data:(NSDictionary *)arg2;
@end
