//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol SCLensMapStorageProtocol <NSObject>
@property(readonly, nonatomic) unsigned long long keysCount;
- (void)clear;
- (NSArray *)allLenses;
- (NSArray *)lensesForKey:(NSString *)arg1;
- (void)setLenses:(NSArray *)arg1 forKey:(NSString *)arg2;
@end

