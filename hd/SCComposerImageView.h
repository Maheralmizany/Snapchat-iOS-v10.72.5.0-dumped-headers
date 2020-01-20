//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "SCNComposerAssetResolveCompletion.h"

@class NSObject, NSURL, SCNComposerAsset;

@interface SCComposerImageView : UIImageView <SCNComposerAssetResolveCompletion>
{
    SCNComposerAsset *_currentResolvingAsset;
    id <SCComposerCancelable> _currentLoadURLRequest;
    id <SCComposerFunction> _completionAction;
    NSURL *_currentURL;
    NSObject *_loadURLRequestToken;
    int _resolveToken;
    _Bool _hasTintColor;
    _Bool _flipOnRtl;
}

+ (void)setImageLoader:(id)arg1;
+ (id)imageLoader;
+ (id)measurePlaceholderView;
+ (void)bindAttributes:(id)arg1;
- (void).cxx_destruct;
- (_Bool)clipsToBoundsByDefault;
- (_Bool)willEnqueueIntoComposerPool;
- (void)composer_applySlowClipping:(_Bool)arg1 animator:(id)arg2;
- (_Bool)composer_loadImage:(id)arg1;
- (_Bool)composer_setAsset:(id)arg1 tintColor:(id)arg2 flipOnRtl:(_Bool)arg3 completionAction:(id)arg4;
- (void)onAssetResolved:(id)arg1 result:(id)arg2;
- (void)_handleResolvedAsset:(id)arg1 result:(id)arg2;
- (void)_handleResolvedAsset:(id)arg1;
- (void)_handleLocalResource:(id)arg1;
- (void)_handleAssetURL:(id)arg1;
- (void)_cancelCurrentAssetResolve;
- (void)_applyImage:(id)arg1;
- (void)_loadURLDidCompleteWithImage:(id)arg1 error:(id)arg2 requestId:(id)arg3;
- (void)_handleLoadDidCompleteWithImage:(id)arg1 error:(id)arg2;
- (void)_cancelCurrentLoadURLRequest;
- (id)initWithFrame:(struct CGRect)arg1;

@end

