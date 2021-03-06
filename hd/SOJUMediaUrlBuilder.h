//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString;

@interface SOJUMediaUrlBuilder : NSObject
{
    NSString *_url;
    NSNumber *_expirySecs;
    NSString *_type;
    NSString *_region;
}

+ (id)withJUMediaUrl:(id)arg1;
- (void).cxx_destruct;
- (id)setRegion:(id)arg1;
- (id)setType:(id)arg1;
- (id)setExpirySecs:(id)arg1;
- (id)setUrl:(id)arg1;
- (id)build;
- (id)setTypeEnum:(long long)arg1;
- (id)setExpirySecsValue:(long long)arg1;

@end

