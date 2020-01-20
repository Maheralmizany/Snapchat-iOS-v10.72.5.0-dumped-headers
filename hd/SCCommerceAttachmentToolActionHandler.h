//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"

@class NSString, NSTimer, UIViewController;

@interface SCCommerceAttachmentToolActionHandler : NSObject <SCActionHandling>
{
    UIViewController *_attachmentViewController;
    id <SCCommerceAttachmentProviding> _attachmentSelectionProvider;
    id <SCCommerceCatalogSearching> _catalogSearcher;
    id <SCCommerceCatalogPagingDataCoordinator> _pagingDataCoordinator;
    id <SCCommerceEventLogger> _eventLogger;
    NSTimer *_queryTimer;
    id <SCCommerceAttachmentProviding> _attachingProvider;
}

@property(nonatomic) __weak id <SCCommerceAttachmentProviding> attachingProvider; // @synthesize attachingProvider=_attachingProvider;
- (void).cxx_destruct;
- (void)_detachAttachment;
- (void)_addAttachmentFromActionDataModel:(id)arg1;
- (void)_deselectAttachment;
- (void)_selectAttachmentFromActionDataModel:(id)arg1;
- (void)_updateSearchQuery:(id)arg1 dismissKeyboard:(_Bool)arg2;
- (void)_dismissAttachmentTool;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithAttachmentViewController:(id)arg1 attachmentSelectionProvider:(id)arg2 pagingDataCoordinator:(id)arg3 catalogSearcher:(id)arg4 eventLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
