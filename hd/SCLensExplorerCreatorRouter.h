//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController;

@interface SCLensExplorerCreatorRouter : NSObject
{
    id <SCLensExplorerProfilePresenterProtocol> _profilePresenter;
    id <SCLensExplorerDependencyProviderProtocol> _lensExplorerDependencyProvider;
}

- (void).cxx_destruct;
- (void)dismissIfNeededAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentCreatorViewControllerWithCreator:(id)arg1 fromViewController:(id)arg2 sourcePageType:(long long)arg3 dismissBlock:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) UIViewController *creatorViewController;
@property(readonly, nonatomic) _Bool isPresenting;
- (id)initWithDependencyProvider:(id)arg1;

@end

