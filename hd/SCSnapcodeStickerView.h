//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCInfoStickerView.h"

#import "SCInfoStickerProtocol.h"
#import "SCPreviewStickerViewCycleable.h"

@class NSDictionary, NSString, SCSnapcodeStickerViewModel, UIImageView, UILabel;

@interface SCSnapcodeStickerView : SCInfoStickerView <SCInfoStickerProtocol, SCPreviewStickerViewCycleable>
{
    UIImageView *_userSnapcodeView;
    UILabel *_usernameLabel;
    UILabel *_displayNameLabel;
    SCSnapcodeStickerViewModel *_viewModel;
}

+ (id)generateSnapcodeStickerForViewModel:(id)arg1;
+ (id)generateSnapcodeForStickerPicker;
+ (void)fetchCurrentSnapcodeForViewModel:(id)arg1 width:(double)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (id)viewModelForStickerPicker;
+ (id)viewModelForStyle:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)shortLoggingName;
- (id)loggingParameters;
- (id)stickerId;
- (id)packId;
- (unsigned long long)type;
- (id)toSOJUSticker;
- (struct CGSize)intrinsicSize;
@property(readonly, nonatomic) unsigned long long infoType;
@property(readonly, nonatomic) NSDictionary *config;
- (void)cycleStickerToNextStyle;
- (_Bool)shouldRespondToTap:(id)arg1;
- (void)updateViewWithCurrentViewType;
- (id)snapcodeStickerLabelWithFrame:(struct CGRect)arg1;
- (void)updateWithUserSnapcode;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

