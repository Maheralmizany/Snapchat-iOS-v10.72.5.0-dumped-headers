//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString;

@protocol SPLogger <NSObject>
- (void)spLogDebug:(NSString *)arg1;
- (void)spLogWarn:(NSString *)arg1;
- (void)spLogInfo:(NSString *)arg1;
- (void)spLogNSError:(NSError *)arg1;
- (void)spLogError:(NSString *)arg1;
@end

