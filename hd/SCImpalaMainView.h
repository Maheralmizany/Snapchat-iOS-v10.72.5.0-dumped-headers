//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCComposerView.h"

@class SCImpalaMainViewModel;

@interface SCImpalaMainView : SCComposerView
{
}

@property(nonatomic) __weak id <SCImpalaMainViewActionHandler> actionHandler;
@property(retain, nonatomic) SCImpalaMainViewModel *viewModel;
- (id)initWithViewModel:(id)arg1 componentContext:(id)arg2;
- (id)bundleName;
- (id)viewName;
- (id)init;

@end

