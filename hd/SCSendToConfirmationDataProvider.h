//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCImpalaBusinessProfileManager, SCLensExplorerSendToFlow, SCSendToDocObjectRecipientDataSource, SCSendToStoriesDataSource;

@interface SCSendToConfirmationDataProvider : NSObject
{
    SCSendToDocObjectRecipientDataSource *_docObjectRecipientDataSource;
    SCSendToStoriesDataSource *_storiesDataSource;
    SCLensExplorerSendToFlow *_lensExplorerSendToFlow;
    SCImpalaBusinessProfileManager *_businessProfileManager;
    _Bool _shouldIncludeBusinessProfiles;
}

- (void).cxx_destruct;
- (void)selectedObjectsFromSelectionResult:(id)arg1 completion:(CDUnknownBlockType)arg2 completionQueue:(id)arg3;
- (id)initWithRecipientDataSource:(id)arg1 storiesDataSource:(id)arg2 businessProfileManager:(id)arg3 lensChallengeName:(id)arg4 selecteRecipientsConfiguration:(id)arg5;

@end
