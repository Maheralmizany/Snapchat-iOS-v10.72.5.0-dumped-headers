//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLens, SCLensOperaController;

@protocol SCLensOperaControllerDelegate <NSObject>
- (void)lensOperaController:(SCLensOperaController *)arg1 didClosePresenter:(id <SCLensOperaPresenterProtocol>)arg2;
- (void)lensOperaController:(SCLensOperaController *)arg1 didOpenPresenter:(id <SCLensOperaPresenterProtocol>)arg2;

@optional
- (void)lensOperaController:(SCLensOperaController *)arg1 didClosePresenter:(id <SCLensOperaPresenterProtocol>)arg2 lensUnlocked:(SCLens *)arg3;
@end

