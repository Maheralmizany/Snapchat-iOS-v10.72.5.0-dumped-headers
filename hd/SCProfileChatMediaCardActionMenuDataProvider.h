//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCUnifiedActionMenuDataProvider.h"

@class NSString, SCProfileChatMediaDataModelADT, SCProfileChatMediaDataSource, SCUserSession;

@interface SCProfileChatMediaCardActionMenuDataProvider : NSObject <SCUnifiedActionMenuDataProvider>
{
    SCProfileChatMediaDataSource *_profileChatMediaDataSource;
    SCUserSession *_userSession;
    SCProfileChatMediaDataModelADT *_dataModel;
    id <SCUnifiedActionMenuDataProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <SCUnifiedActionMenuDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_sendTo;
- (id)_saveToCameraRoll;
- (id)_delete;
- (id)_saveInChat;
- (id)_unsaveInChat;
- (void)updateViewModelWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithProfileChatMediaDataSource:(id)arg1 userSession:(id)arg2 chatMediaDataModel:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

