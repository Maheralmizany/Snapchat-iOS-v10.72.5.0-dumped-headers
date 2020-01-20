//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, SCActionModel;

@interface SCUnifiedProfileFriendsCellViewModel : NSObject <NSCopying>
{
    _Bool _showSilhouetteBackground;
    NSArray *_bitmojiAvatarViewModels;
    SCActionModel *_tapActionModel;
}

@property(readonly, copy, nonatomic) SCActionModel *tapActionModel; // @synthesize tapActionModel=_tapActionModel;
@property(readonly, copy, nonatomic) NSArray *bitmojiAvatarViewModels; // @synthesize bitmojiAvatarViewModels=_bitmojiAvatarViewModels;
@property(readonly, nonatomic) _Bool showSilhouetteBackground; // @synthesize showSilhouetteBackground=_showSilhouetteBackground;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithShowSilhouetteBackground:(_Bool)arg1 bitmojiAvatarViewModels:(id)arg2 tapActionModel:(id)arg3;

@end

