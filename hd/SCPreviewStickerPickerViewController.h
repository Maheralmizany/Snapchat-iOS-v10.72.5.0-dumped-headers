//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCShakeToReportDelegate.h"
#import "SCStickerPickerViewContainer.h"
#import "SCVenueFeedbackViewControllerDelegate.h"
#import "SCVenueReporter.h"

@class NSString, SCPreviewStickerPickerController, SCStickerPickerMenuView, SCUserSession;

@interface SCPreviewStickerPickerViewController : UIViewController <SCShakeToReportDelegate, SCVenueReporter, SCVenueFeedbackViewControllerDelegate, SCStickerPickerViewContainer>
{
    SCStickerPickerMenuView *_pickerView;
    id <SCPreviewLogging> _previewLogger;
    id <SCPreviewStickerPickerVenueDataSource> _venueDataSource;
    SCPreviewStickerPickerController *_pickerController;
    SCUserSession *_userSession;
}

@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) SCPreviewStickerPickerController *pickerController; // @synthesize pickerController=_pickerController;
@property(nonatomic) __weak id <SCPreviewStickerPickerVenueDataSource> venueDataSource; // @synthesize venueDataSource=_venueDataSource;
- (void).cxx_destruct;
- (void)venueFeedbackViewControllerWantsToDismiss:(id)arg1;
- (void)presentReportVenueViewWithViewController:(id)arg1 venue:(id)arg2;
- (void)reportVenue:(id)arg1;
- (id)defaultProjectNameV2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)reloadDataWithDataSourceUpdateHint:(id)arg1 shouldRefreshSuperCategoryIcons:(_Bool)arg2;
- (void)reloadDataWithDataSourceUpdateHint:(id)arg1;
- (void)close;
- (void)openAtCategory:(id)arg1 stickerOffset:(id)arg2;
@property(readonly, nonatomic) _Bool isOpen;
- (_Bool)prefersStatusBarHidden;
- (_Bool)shouldDisplayStatusBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) SCStickerPickerMenuView *pickerView;
- (id)initWithViewFrame:(struct CGRect)arg1 isQuickSend:(_Bool)arg2 hideGiphy:(_Bool)arg3 commonLoggingParameters:(id)arg4 userSession:(id)arg5 bottomInset:(double)arg6 stickerPickerLogger:(id)arg7 previewLogger:(id)arg8 menuDelegate:(id)arg9 menuDataSource:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

