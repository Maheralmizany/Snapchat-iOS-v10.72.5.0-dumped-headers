//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol SCStudioLensLogger <NSObject>
@property(readonly, nonatomic) NSArray *logs;
- (void)removeListener:(id <SCStudioLensLoggerListener>)arg1;
- (_Bool)addListener:(id <SCStudioLensLoggerListener>)arg1;
- (void)clear;
- (void)appendLog:(NSString *)arg1;
@end

