//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCUnifiedActionMenuDataProvider.h"
#import "SCUpdateListener.h"

@class NSString, SCLazy, SCUnifiedProfileMyStoriesDataSourceManager;

@interface SCUnifiedProfileCustomStoryActionMenuDataProvider : NSObject <SCUpdateListener, SCUnifiedActionMenuDataProvider>
{
    SCUnifiedProfileMyStoriesDataSourceManager *_storiesDataSourceManager;
    SCLazy *_customStoriesDataFetcher;
    long long _storyType;
    NSString *_storyIdentifier;
    NSString *_currentUserId;
    id <SCUnifiedActionMenuDataProviderDelegate> _delegate;
}

@property(nonatomic) __weak id <SCUnifiedActionMenuDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)_updateViewModelWithCustomStory:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateViewModelWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithStoriesDataSourceManager:(id)arg1 customStoriesDataFetcher:(id)arg2 storyType:(long long)arg3 storyIdentifier:(id)arg4 currentUserId:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

