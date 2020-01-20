//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaPlaylistFetcher.h"

@class NSArray, NSString;

@interface SCImpalaStoryPlayerPlaylistFetcher : NSObject <SCOperaPlaylistFetcher>
{
    CDUnknownBlockType _dataModelProvider;
    unsigned long long _loadingState;
    NSArray *_resolvedDataModels;
    unsigned long long _startingIndex;
    id <SCOperaPlaylistFetcherDelegate> _delegate;
}

@property(nonatomic) __weak id <SCOperaPlaylistFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)loadingState;
- (id)firstDisplayGroupDataModel;
- (id)resolvedDataModels;
- (id)currentLoadingProperties;
- (void)fetchPlaylist;
- (void)_setLoadingState:(unsigned long long)arg1;
- (void)_resolveWithDataModels:(id)arg1 startingIndex:(long long)arg2 error:(id)arg3;
- (id)initWithDataModelProvider:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

