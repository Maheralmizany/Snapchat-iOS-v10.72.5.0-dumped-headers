//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface SCAdMediaSnapcodeInfo : NSObject <NSCopying, NSCoding>
{
    NSString *_scancodeId;
    NSString *_scancodeVersion;
}

@property(readonly, copy, nonatomic) NSString *scancodeVersion; // @synthesize scancodeVersion=_scancodeVersion;
@property(readonly, copy, nonatomic) NSString *scancodeId; // @synthesize scancodeId=_scancodeId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithScancodeId:(id)arg1 scancodeVersion:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

