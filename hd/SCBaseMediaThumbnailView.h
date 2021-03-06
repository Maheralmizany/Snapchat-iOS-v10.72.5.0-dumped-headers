//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCBrowserViewControllerDelegate.h"
#import "SCDiscoverBarDelegate.h"
#import "SCSendPreviewMediaView.h"
#import "SCShazamOperaControllerDelegate.h"
#import "SCTraceEnabled.h"
#import "UIGestureRecognizerDelegate.h"

@class AVPlayer, FBKVOController, FLAnimatedImage, FLAnimatedImageView, NSString, SCAudioStitchPreviewHandler, SCBaseMediaThumbnailViewModel, SCBrowserViewController, SCDiscoverBarView, SCDiscoverDSnapExpirationValidator, SCLazy, SCLoadingIndicatorView, SCPlayerView, SCShazamOperaPresenter, SCUserSession, UIImageView, UILabel, UITapGestureRecognizer, UIViewController<SCChatCellBaseGestureDelegate>, UIViewController<SCChatCellBaseGestureDelegate><SCChatCellMessageStateUpdateDelegate>, UIWindow;

@interface SCBaseMediaThumbnailView : UIView <SCDiscoverBarDelegate, UIGestureRecognizerDelegate, SCShazamOperaControllerDelegate, SCBrowserViewControllerDelegate, SCTraceEnabled, SCSendPreviewMediaView>
{
    SCUserSession *_userSession;
    UITapGestureRecognizer *_tapGesture;
    UIWindow *_mediaFullScreenWindow;
    UIViewController<SCChatCellBaseGestureDelegate> *_parentVC;
    id <SCChatFullscreenMediaChatTableCellDelegate> _delegate;
    SCDiscoverDSnapExpirationValidator *_dSnapExpirationValidator;
    SCShazamOperaPresenter *_khaleesiOperaPresenter;
    double _mediaBottomOffset;
    struct CGRect _viewBounds;
    SCAudioStitchPreviewHandler *_audioStitchPreviewHandler;
    _Bool _videoShouldBePlaying;
    _Bool _shouldExcludeDiscoverBar;
    SCBrowserViewController *_webBrowser;
    SCLazy *_blurredImageView;
    SCLazy *_badgeImageView;
    SCBaseMediaThumbnailViewModel *_viewModel;
    SCLoadingIndicatorView *_activityIndicator;
    UIView *_blockingOverlayView;
    UILabel *_failedToSendLabel;
    SCDiscoverBarView *_discoverBar;
    AVPlayer *_player;
    UILabel *_tapToLoadLabel;
    UILabel *_failedToLoadLabel;
    FLAnimatedImage *_storedAnimatedImage;
    FBKVOController *_videoObserveController;
    FLAnimatedImageView *_imageView;
    UIImageView *_videoOverlayView;
    SCPlayerView *_videoView;
    struct CGSize _thumbnailSize;
}

+ (id)defaultBackgroundColor;
+ (id)labelFont;
+ (id)grayChatColor;
+ (id)borderColor;
@property(retain, nonatomic) SCPlayerView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) UIImageView *videoOverlayView; // @synthesize videoOverlayView=_videoOverlayView;
@property(retain, nonatomic) FLAnimatedImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) FBKVOController *videoObserveController; // @synthesize videoObserveController=_videoObserveController;
@property(retain, nonatomic) FLAnimatedImage *storedAnimatedImage; // @synthesize storedAnimatedImage=_storedAnimatedImage;
@property(retain, nonatomic) UILabel *failedToLoadLabel; // @synthesize failedToLoadLabel=_failedToLoadLabel;
@property(retain, nonatomic) UILabel *tapToLoadLabel; // @synthesize tapToLoadLabel=_tapToLoadLabel;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) SCDiscoverBarView *discoverBar; // @synthesize discoverBar=_discoverBar;
@property(retain, nonatomic) UILabel *failedToSendLabel; // @synthesize failedToSendLabel=_failedToSendLabel;
@property(retain, nonatomic) UIView *blockingOverlayView; // @synthesize blockingOverlayView=_blockingOverlayView;
@property(retain, nonatomic) SCLoadingIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(readonly, nonatomic) __weak UIViewController<SCChatCellBaseGestureDelegate><SCChatCellMessageStateUpdateDelegate> *parentVC; // @synthesize parentVC=_parentVC;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(retain, nonatomic) SCBaseMediaThumbnailViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)pause;
- (void)play;
- (id)SCAMediaTypes;
- (_Bool)_isDisplayingV3Media;
- (_Bool)_isDisplayingDiscoverShare;
- (_Bool)fullScreenIsShown;
- (void)dismissFullScreenView;
- (void)browserViewIsClosing;
- (void)_initWebViewBrowserWithURL:(id)arg1;
- (void)_presentWebView;
- (void)presentDeepLinkContentFromFullScreen;
- (id)dUserSession;
- (id)dSnapValidator;
- (void)handleRetryOnBar:(id)arg1;
- (void)handleTapToNavigateOnBar:(id)arg1 withDiscoverMetadata:(id)arg2;
- (id)discoverMetadataToLog:(id)arg1;
- (_Bool)isDiscoverMessage:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_insertThumbnailLabel:(id)arg1;
- (id)_thumbnailLabelWithText:(id)arg1;
- (_Bool)_isDiscoverMessage;
- (_Bool)_isMischiefMessage;
- (void)repopulateAnimatedImage;
- (void)releaseAnimatedImage;
- (void)stopAnimation;
- (void)startAnimation;
- (void)createFullScreenView;
- (void)fetchOriginalImageToDisplayWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didCloseOperaViewer;
- (void)operaPresenterDidDisappear;
- (void)operaPresenterWillAppear;
- (void)handleTap:(id)arg1;
- (void)resetPlayer;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)_showLoadingBlockingOverlay;
- (void)_showSendingBlockingOverlay;
- (void)_updateBlockingOverlay;
- (void)hideBlockingOverlayWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_createAndShowBadgeIfNecessary;
- (_Bool)_readyToRemoveOverlay;
- (void)resumeVideo;
- (void)pauseVideo;
- (void)resetContents;
- (void)_hideSpinner;
- (void)_showSpinner;
- (_Bool)contentPopulated;
- (void)setUpPendingDisplay;
- (void)_setUpCompleteDisplayWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_setUpCompleteDisplay;
- (void)setUpDisplay;
- (void)_setUpAVPlayerWithAVComposition:(id)arg1;
- (void)setUpVideo;
- (void)prepareVideoIfNecessary;
- (void)_fetchAndAttachVideoOverlay;
- (void)_prepareDiscoverBarIfNecessary;
- (void)onRenderingDoneWithMediaType:(id)arg1;
- (void)_renderThumbnailImage:(id)arg1;
- (void)_renderAnimatedImage:(id)arg1;
- (void)_mediaLoadFailed:(id)arg1 error:(long long)arg2;
- (void)_setUpAccessibilityValueForViewModel:(id)arg1;
- (void)setMediaViewModel:(id)arg1;
- (void)layoutActivityIndicator;
- (void)setMediaBottomOffset:(double)arg1;
- (void)dealloc;
- (void)_initGestures;
- (void)_initBlockingOverlayView;
- (void)_initBadgeImageView;
- (void)_initBlurredImageView;
- (void)_initImageView;
- (double)_centerYOffsetWithThumbnailHeight:(double)arg1 mediaOffset:(double)arg2;
- (void)setUserSession:(id)arg1;
- (void)layoutSubviews;
- (void)_initSubviews;
- (id)initWithThumbnailSize:(struct CGSize)arg1 userInteractionEnabled:(_Bool)arg2 shouldExcludeDiscoverBar:(_Bool)arg3;
- (id)initWithParentVC:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

