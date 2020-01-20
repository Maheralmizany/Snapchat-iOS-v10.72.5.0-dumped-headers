//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class SCAdMediaImage, SCAdMediaVideo;

@interface SCAdSnapTopMediaVideo : NSObject <NSCopying, NSCoding>
{
    SCAdMediaImage *_firstFrameImage;
    SCAdMediaVideo *_video;
}

@property(readonly, copy, nonatomic) SCAdMediaVideo *video; // @synthesize video=_video;
@property(readonly, copy, nonatomic) SCAdMediaImage *firstFrameImage; // @synthesize firstFrameImage=_firstFrameImage;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFirstFrameImage:(id)arg1 video:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

