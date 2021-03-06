//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCArcadiaDataProviderSearchDelegate.h"
#import "SCLensDiscoverySearchController.h"

@class NSString, SCArcadiaDataProvider;

@interface SCArcadiaSearchController : NSObject <SCArcadiaDataProviderSearchDelegate, SCLensDiscoverySearchController>
{
    SCArcadiaDataProvider *_dataProvider;
    NSString *_nextCursor;
    NSString *_currentRequestKey;
    id <SCLensDiscoverySearchControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCLensDiscoverySearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)arcadiaDataProvider:(id)arg1 didFetchObjects:(id)arg2 forQuery:(id)arg3 nextCursor:(id)arg4;
- (_Bool)hasMore;
- (void)cancelPreviousRequestIfPossible;
- (void)performSearchForString:(id)arg1 fromBeginning:(_Bool)arg2;
- (id)initWithDataProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

