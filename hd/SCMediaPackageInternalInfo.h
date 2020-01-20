//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDate, NSString;

@interface SCMediaPackageInternalInfo : NSObject <NSCopying, NSCoding>
{
    _Bool _isLocked;
    NSString *_mediaPackageId;
    NSDate *_obsoleteTime;
}

@property(readonly, nonatomic) _Bool isLocked; // @synthesize isLocked=_isLocked;
@property(readonly, copy, nonatomic) NSDate *obsoleteTime; // @synthesize obsoleteTime=_obsoleteTime;
@property(readonly, copy, nonatomic) NSString *mediaPackageId; // @synthesize mediaPackageId=_mediaPackageId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaPackageId:(id)arg1 obsoleteTime:(id)arg2 isLocked:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;

@end

