//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray;

@interface SCCognacAppPremiumContentInfo : NSObject <NSCopying, NSCoding>
{
    NSArray *_supportedPremiumContents;
    NSArray *_grantedPremiumContents;
}

@property(readonly, copy, nonatomic) NSArray *grantedPremiumContents; // @synthesize grantedPremiumContents=_grantedPremiumContents;
@property(readonly, copy, nonatomic) NSArray *supportedPremiumContents; // @synthesize supportedPremiumContents=_supportedPremiumContents;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSupportedPremiumContents:(id)arg1 grantedPremiumContents:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

