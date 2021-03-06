//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCConversationTextAttributeContent : NSObject <NSCopying>
{
    BOOL _type;
    BOOL _formatType;
    NSString *_iosHref;
    NSString *_herf;
    NSString *_itunesId;
    NSString *_affiliateToken;
    NSString *_campaignTracker;
}

@property(readonly, nonatomic) BOOL formatType; // @synthesize formatType=_formatType;
@property(readonly, copy, nonatomic) NSString *campaignTracker; // @synthesize campaignTracker=_campaignTracker;
@property(readonly, copy, nonatomic) NSString *affiliateToken; // @synthesize affiliateToken=_affiliateToken;
@property(readonly, copy, nonatomic) NSString *itunesId; // @synthesize itunesId=_itunesId;
@property(readonly, copy, nonatomic) NSString *herf; // @synthesize herf=_herf;
@property(readonly, copy, nonatomic) NSString *iosHref; // @synthesize iosHref=_iosHref;
@property(readonly, nonatomic) BOOL type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(BOOL)arg1 iosHref:(id)arg2 herf:(id)arg3 itunesId:(id)arg4 affiliateToken:(id)arg5 campaignTracker:(id)arg6 formatType:(BOOL)arg7;

@end

