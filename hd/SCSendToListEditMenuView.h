//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCComposerView.h"

@class SCComposerScrollView, SCSendToListEditMenuViewModel;

@interface SCSendToListEditMenuView : SCComposerView
{
}

- (void)emitHide:(id)arg1;
- (void)emitShow:(id)arg1;
@property(readonly, nonatomic) SCComposerScrollView *scrollView;
@property(readonly, nonatomic) SCComposerView *editMenu;
@property(readonly, nonatomic) SCComposerView *overlay;
@property(retain, nonatomic) SCSendToListEditMenuViewModel *viewModel;
- (id)initWithViewModel:(id)arg1 componentContext:(id)arg2;
- (id)bundleName;
- (id)viewName;
- (id)init;

@end
