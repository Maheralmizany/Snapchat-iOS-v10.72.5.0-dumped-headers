//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSearchViewController.h"

#import "SCShakeToReportDelegate.h"

@class NSString;

@interface SCMapSearchViewController : SCSearchViewController <SCShakeToReportDelegate>
{
}

- (id)defaultProjectNameV2;
- (void)setSearchViewTextWithoutUpdate:(id)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

