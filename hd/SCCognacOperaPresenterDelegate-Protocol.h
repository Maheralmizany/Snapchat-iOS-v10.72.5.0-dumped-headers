//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCCognacOperaPlayerItem, SCCognacOperaPresenter, SCCognacOperaSessionParticipantInfo;

@protocol SCCognacOperaPresenterDelegate <NSObject>
- (void)cognacOperaPresenter:(SCCognacOperaPresenter *)arg1 willDismissViewerWithParticipantInfo:(SCCognacOperaSessionParticipantInfo *)arg2;
- (void)cognacOperaPresenterDidFinishDismissViewer:(SCCognacOperaPresenter *)arg1;
- (void)cognacOperaPresenter:(SCCognacOperaPresenter *)arg1 didFinishPresentViewerWithPlayerItem:(SCCognacOperaPlayerItem *)arg2;
- (void)cognacOperaPresenterDidBeginPresentViewer:(SCCognacOperaPresenter *)arg1;
@end
