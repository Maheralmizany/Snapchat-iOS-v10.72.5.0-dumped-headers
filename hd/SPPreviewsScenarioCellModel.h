//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGListDiffable.h"

@class NSString, UIImage;

@interface SPPreviewsScenarioCellModel : NSObject <IGListDiffable>
{
    _Bool _volumeEnabled;
    _Bool _showVolumeStatus;
    _Bool _sindleTapShouldWaitDoubleTapFail;
    _Bool _showError;
    NSString *_identifier;
    unsigned long long _appearanceType;
    id <FFPlayerItem> _videoItem;
    UIImage *_thumbnail;
    UIImage *_errorImage;
}

@property(readonly, nonatomic) _Bool showError; // @synthesize showError=_showError;
@property(readonly, nonatomic) _Bool sindleTapShouldWaitDoubleTapFail; // @synthesize sindleTapShouldWaitDoubleTapFail=_sindleTapShouldWaitDoubleTapFail;
@property(readonly, nonatomic) _Bool showVolumeStatus; // @synthesize showVolumeStatus=_showVolumeStatus;
@property(readonly, nonatomic) _Bool volumeEnabled; // @synthesize volumeEnabled=_volumeEnabled;
@property(readonly, nonatomic) UIImage *errorImage; // @synthesize errorImage=_errorImage;
@property(readonly, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(readonly, nonatomic) id <FFPlayerItem> videoItem; // @synthesize videoItem=_videoItem;
@property(readonly, nonatomic) unsigned long long appearanceType; // @synthesize appearanceType=_appearanceType;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)initWithIdentifier:(id)arg1 videoItem:(id)arg2 thumbnail:(id)arg3 errorImage:(id)arg4 appearanceType:(unsigned long long)arg5 volumeEnabled:(_Bool)arg6 showVolumeStatus:(_Bool)arg7 sindleTapShouldWaitDoubleTapFail:(_Bool)arg8 showError:(_Bool)arg9;

@end

