//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray, NSMutableArray, NSString, SIGActionSheetNavigationController, UIScrollView, UIStackView, UIView;

@interface SIGActionSheet : UIViewController
{
    NSMutableArray *_actionItems;
    NSString *_sectionHeaderText;
    UIStackView *_stackView;
    NSArray *_headerConstraints;
    NSArray *_bodyConstraints;
    NSArray *_footerConstraints;
    UIView *_backgroundView;
    UIView *_header;
    UIScrollView *_containerView;
    UIView *_footer;
    id <SIGActionSheetDelegate> _delegate;
    SIGActionSheetNavigationController *_actionSheetNavigationController;
}

@property(nonatomic) __weak SIGActionSheetNavigationController *actionSheetNavigationController; // @synthesize actionSheetNavigationController=_actionSheetNavigationController;
@property(nonatomic) __weak id <SIGActionSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *actionItems; // @synthesize actionItems=_actionItems;
@property(retain, nonatomic) UIView *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *header; // @synthesize header=_header;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)_setupAutolayout;
- (double)_stackViewIntrinsicContentHeight;
- (void)_updateConstraints;
- (void)_setupBody;
- (void)_setupFooter;
- (void)_setupHeader;
- (void)_createFooterContainerWith:(id)arg1;
- (void)_createHeaderContainerWith:(id)arg1;
- (void)_resetActionSheetView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dismissActionSheetWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissActionSheet;
- (void)presentNestedActionSheet:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)replaceWithActionItems:(id)arg1 title:(id)arg2 headerItem:(id)arg3 footerItem:(id)arg4;
- (id)initWithActionItems:(id)arg1 title:(id)arg2 headerItem:(id)arg3 footerItem:(id)arg4;
- (void)replaceWithHeader:(id)arg1 title:(id)arg2 actionSheetCells:(id)arg3 footer:(id)arg4;
- (id)initWithHeader:(id)arg1 title:(id)arg2 actionSheetCells:(id)arg3 footer:(id)arg4;

@end
