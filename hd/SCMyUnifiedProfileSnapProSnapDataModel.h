//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDate, NSString, SCNetworkImage;

@interface SCMyUnifiedProfileSnapProSnapDataModel : NSObject <NSCopying>
{
    _Bool _isPending;
    _Bool _hasFailed;
    _Bool _shouldShowViewers;
    NSString *_profileId;
    NSString *_snapId;
    NSString *_clientId;
    NSDate *_timestamp;
    SCNetworkImage *_thumbnail;
    NSString *_captionText;
    unsigned long long _totalViewCount;
    unsigned long long _screenshotCount;
}

@property(readonly, nonatomic) _Bool shouldShowViewers; // @synthesize shouldShowViewers=_shouldShowViewers;
@property(readonly, nonatomic) unsigned long long screenshotCount; // @synthesize screenshotCount=_screenshotCount;
@property(readonly, nonatomic) unsigned long long totalViewCount; // @synthesize totalViewCount=_totalViewCount;
@property(readonly, copy, nonatomic) NSString *captionText; // @synthesize captionText=_captionText;
@property(readonly, nonatomic) _Bool hasFailed; // @synthesize hasFailed=_hasFailed;
@property(readonly, nonatomic) _Bool isPending; // @synthesize isPending=_isPending;
@property(readonly, copy, nonatomic) SCNetworkImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(readonly, copy, nonatomic) NSString *snapId; // @synthesize snapId=_snapId;
@property(readonly, copy, nonatomic) NSString *profileId; // @synthesize profileId=_profileId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithProfileId:(id)arg1 snapId:(id)arg2 clientId:(id)arg3 timestamp:(id)arg4 thumbnail:(id)arg5 isPending:(_Bool)arg6 hasFailed:(_Bool)arg7 captionText:(id)arg8 totalViewCount:(unsigned long long)arg9 screenshotCount:(unsigned long long)arg10 shouldShowViewers:(_Bool)arg11;

@end

