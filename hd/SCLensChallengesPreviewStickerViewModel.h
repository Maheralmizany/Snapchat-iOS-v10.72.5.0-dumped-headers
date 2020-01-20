//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString, NSURL, SCLensChallengesSectionMusicMetadata;

@interface SCLensChallengesPreviewStickerViewModel : NSObject <NSCopying, NSCoding>
{
    SCLensChallengesSectionMusicMetadata *_musicMetadata;
    NSString *_artistName;
    NSString *_songName;
    NSURL *_songIconURL;
}

@property(readonly, copy, nonatomic) NSURL *songIconURL; // @synthesize songIconURL=_songIconURL;
@property(readonly, copy, nonatomic) NSString *songName; // @synthesize songName=_songName;
@property(readonly, copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, copy, nonatomic) SCLensChallengesSectionMusicMetadata *musicMetadata; // @synthesize musicMetadata=_musicMetadata;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMusicMetadata:(id)arg1 artistName:(id)arg2 songName:(id)arg3 songIconURL:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithMusicMetadata:(id)arg1;

@end

