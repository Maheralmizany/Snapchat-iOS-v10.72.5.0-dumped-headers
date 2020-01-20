//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCS2RSubScreenViewController.h"

#import "SCC2RAttachmentDescriptionViewDelegate.h"
#import "SCS2RFeatureSelectionDelegate.h"
#import "SCShakeDrawOnAttachmentViewControllerDelegate.h"
#import "TTTAttributedLabelDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class NSArray, NSString, SCS2RAttachmentDescriptionView, SCShakeCaptureData, SIGActionButton, SIGTableViewCell, SIGTooltip, TTTAttributedLabel, UIView;

@interface SCSIGBaseShakeToReportViewController : SCS2RSubScreenViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, SCC2RAttachmentDescriptionViewDelegate, SCShakeDrawOnAttachmentViewControllerDelegate, SCS2RFeatureSelectionDelegate, TTTAttributedLabelDelegate>
{
    SCShakeCaptureData *_shakeCaptureData;
    NSArray *_featureNames;
    long long _reportType;
    SCS2RAttachmentDescriptionView *_attachmentDescription;
    UIView *_optionsView;
    SIGActionButton *_submitButton;
    long long _selectedFeatureIndex;
    SIGTableViewCell *_addAttachmentCell;
    SIGTableViewCell *_chooseTopicCell;
    TTTAttributedLabel *_infoCollectionWarning;
    SIGTooltip *_addAttachmentTooltip;
    _Bool _submitEnabled;
    _Bool _hasScreenshot;
    _Bool _hasCameraRollImage;
    _Bool _hasInputText;
    NSString *_screenSelected;
    NSString *_viewControllerName;
    NSString *_viewControllerFeature;
    NSString *_shakeId;
}

@property(copy, nonatomic) NSString *shakeId; // @synthesize shakeId=_shakeId;
@property(copy, nonatomic) NSString *viewControllerFeature; // @synthesize viewControllerFeature=_viewControllerFeature;
@property(copy, nonatomic) NSString *viewControllerName; // @synthesize viewControllerName=_viewControllerName;
@property(copy, nonatomic) NSString *screenSelected; // @synthesize screenSelected=_screenSelected;
- (void).cxx_destruct;
- (_Bool)_shouldShowAttachmentToolTip;
- (void)_hideKeyboard;
- (void)_hideToolTip;
- (id)_getChooseTopicCellText;
- (void)_setupConstraints;
- (id)_constraintsForCell:(id)arg1 below:(id)arg2;
- (void)_addCells:(id)arg1 toView:(id)arg2;
- (void)_chooseTopicSingleTap:(id)arg1;
- (void)_addAttachmentSingleTap:(id)arg1;
- (id)_optionCells;
- (void)_submitButtonPressed;
- (void)_resetSelectedCell;
- (void)_highlightRequiredFields;
- (id)_selectedFeature;
- (void)_addImageAttachment:(id)arg1;
- (id)_getTitleByReportSource:(long long)arg1 reportType:(long long)arg2;
- (void)_updateSubmitButton;
- (void)removeObservers;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWillshow:(id)arg1;
- (void)addObservers;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)didSelectFeatureInIndex:(long long)arg1;
- (void)drawOnAttachmentViewControllerDidDeleteImage:(id)arg1 index:(long long)arg2;
- (void)drawOnAttachmentViewController:(id)arg1 didChangeAttachmentImage:(id)arg2 index:(long long)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)descriptionTextDidChange;
- (void)attachmentDidSingleTap:(long long)arg1 attachmentView:(id)arg2 type:(unsigned long long)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithCapturedData:(id)arg1 featureNames:(id)arg2 reportType:(long long)arg3 reportSouce:(long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

