//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface SCAdMediaStoryAd : NSObject <NSCopying, NSCoding>
{
    _Bool _shouldLoop;
    NSString *_placementId;
    NSString *_compositeCreativeId;
    NSString *_tileImageURL;
    NSString *_tileLogoURL;
    NSString *_tileHeadline;
}

@property(readonly, nonatomic) _Bool shouldLoop; // @synthesize shouldLoop=_shouldLoop;
@property(readonly, copy, nonatomic) NSString *tileHeadline; // @synthesize tileHeadline=_tileHeadline;
@property(readonly, copy, nonatomic) NSString *tileLogoURL; // @synthesize tileLogoURL=_tileLogoURL;
@property(readonly, copy, nonatomic) NSString *tileImageURL; // @synthesize tileImageURL=_tileImageURL;
@property(readonly, copy, nonatomic) NSString *compositeCreativeId; // @synthesize compositeCreativeId=_compositeCreativeId;
@property(readonly, copy, nonatomic) NSString *placementId; // @synthesize placementId=_placementId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPlacementId:(id)arg1 compositeCreativeId:(id)arg2 tileImageURL:(id)arg3 tileLogoURL:(id)arg4 tileHeadline:(id)arg5 shouldLoop:(_Bool)arg6;
- (id)initWithCoder:(id)arg1;

@end

