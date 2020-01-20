//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoding.h"
#import "NSObject.h"

@class NSString;

@protocol SCSpectaclesFirmwareVersion <NSObject, NSCoding>
@property(readonly, copy, nonatomic) NSString *suffix;
@property(readonly, nonatomic) long long patchVersion;
@property(readonly, nonatomic) long long minorVersion;
@property(readonly, nonatomic) long long majorVersion;
- (_Bool)isEqualToVersion:(id <SCSpectaclesFirmwareVersion>)arg1;
- (_Bool)isVersionGreaterThan:(id <SCSpectaclesFirmwareVersion>)arg1;
- (long long)compare:(id <SCSpectaclesFirmwareVersion>)arg1;
@end

