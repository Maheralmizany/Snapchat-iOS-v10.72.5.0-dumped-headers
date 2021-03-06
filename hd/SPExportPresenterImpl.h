//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AIFKVONSObject.h"

#import "SCBloopsExportViewControllerDelegate.h"
#import "SPExportPresenter.h"

@class NSProgress, NSString, SCBloopsExportViewController, SPExportRequest, UIViewController;

@interface SPExportPresenterImpl : AIFKVONSObject <SCBloopsExportViewControllerDelegate, SPExportPresenter>
{
    CDUnknownBlockType _exportProcessCompletion;
    CDUnknownBlockType _progressBlock;
    SPExportRequest *_request;
    SCBloopsExportViewController *_bloopsExportViewController;
    UIViewController *_sourceViewController;
    _Bool _canceled;
    id <SPExportPresenterOutput> output;
    id <SPReenactmentClientsManager> _reenacmentService;
    NSProgress *_progress;
    id <SPExportInteractorInput> _interactor;
}

@property(retain, nonatomic) id <SPExportInteractorInput> interactor; // @synthesize interactor=_interactor;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) id <SPReenactmentClientsManager> reenacmentService; // @synthesize reenacmentService=_reenacmentService;
@property(nonatomic) __weak id <SPExportPresenterOutput> output; // @synthesize output;
- (void).cxx_destruct;
- (void)_presentActivityViewControllerWithGifURL:(id)arg1 videoURL:(id)arg2;
- (void)exportViewControllerDidTapClose:(id)arg1;
- (void)presentExportFrom:(id)arg1 request:(id)arg2;
- (id)initWithInteractor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

