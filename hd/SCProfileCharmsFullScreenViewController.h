//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCShakeToReportDelegate.h"
#import "SCTraceEnabled.h"

@class NSIndexPath, NSString, SCProfileCharmsCollectionViewCell, UIView;

@interface SCProfileCharmsFullScreenViewController : UIViewController <SCShakeToReportDelegate, SCTraceEnabled>
{
    UIView *_background;
    SCProfileCharmsCollectionViewCell *_collectionViewCell;
    NSIndexPath *_indexPath;
    double _animationDuration;
}

@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak SCProfileCharmsCollectionViewCell *collectionViewCell; // @synthesize collectionViewCell=_collectionViewCell;
- (void).cxx_destruct;
- (id)defaultSubProjectName;
- (id)defaultProjectNameV2;
- (void)_handleTap;
- (void)fadeoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

