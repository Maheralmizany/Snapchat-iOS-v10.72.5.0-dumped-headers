//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCStoriesPlaybackImpalaMetadata : NSObject <NSCopying>
{
    NSString *_businessName;
    NSString *_businessId;
    NSString *_businessLogoURL;
    NSString *_businessLinkURL;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiAvatarSelfieId;
}

@property(readonly, copy, nonatomic) NSString *bitmojiAvatarSelfieId; // @synthesize bitmojiAvatarSelfieId=_bitmojiAvatarSelfieId;
@property(readonly, copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(readonly, copy, nonatomic) NSString *businessLinkURL; // @synthesize businessLinkURL=_businessLinkURL;
@property(readonly, copy, nonatomic) NSString *businessLogoURL; // @synthesize businessLogoURL=_businessLogoURL;
@property(readonly, copy, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
@property(readonly, copy, nonatomic) NSString *businessName; // @synthesize businessName=_businessName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBusinessName:(id)arg1 businessId:(id)arg2 businessLogoURL:(id)arg3 businessLinkURL:(id)arg4 bitmojiAvatarId:(id)arg5 bitmojiAvatarSelfieId:(id)arg6;

@end

