//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCScribbleViewDelegate.h"

@class NSString, SCScribbleView, UIImage, UILabel;

@interface SCCustomStickerController : NSObject <SCScribbleViewDelegate>
{
    _Bool _shouldFadeInAndOut;
    long long _imageSizeLimit;
    UIImage *_capturedImage;
    id <SCPerforming> _dispatchPerformer;
    UILabel *_cutAlertLabel;
    struct unique_ptr<SnapCutExt, std::__1::default_delete<SnapCutExt>> _snapCut;
    id <SCDownloadableContentManaging> _downloadableContentManager;
    _Bool _isOpen;
    _Bool _isCutting;
    id <SCCustomStickerControllerDelegate> _delegate;
    SCScribbleView *_scribbleView;
}

@property(readonly, nonatomic) SCScribbleView *scribbleView; // @synthesize scribbleView=_scribbleView;
@property(readonly, nonatomic) _Bool isCutting; // @synthesize isCutting=_isCutting;
@property(readonly, nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(nonatomic) __weak id <SCCustomStickerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setCapturedImage:(id)arg1;
- (void)_runGrabCut:(id)arg1;
- (void)scribbleEnded:(id)arg1;
- (void)scribbleBegan;
- (void)_loadSnapCutModelCompletion:(CDUnknownBlockType)arg1;
- (void)_setSnapCutModelIfNecessary;
- (void)_fadeOutCutAlertLabel;
- (void)_showCutAlertLabel:(id)arg1;
- (void)_showTooltip:(id)arg1;
- (void)showMaxLimitHitTooltip;
- (void)showOnboardingTooltip;
- (void)openCustomStickerScribbleView;
- (void)close;
- (id)initWithImageSizeLimit:(long long)arg1 shouldFadeInAndOut:(_Bool)arg2 downloadableContentManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
