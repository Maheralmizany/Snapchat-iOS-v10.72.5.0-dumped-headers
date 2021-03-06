//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBusinessLogic.h"

@class NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface SCPostSavePromptBusinessLogic : SCBusinessLogic
{
    id <SCPostSavePromptDelegate> _postSavePromptDelegate;
    id <SCSnapchattersDataFetching> _snapchattersDataFetcher;
    NSArray *_snapchatters;
    id <SCBitmojiSelfieFetcher> _bitmojiFetcher;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_avatars;
    NSString *_title;
}

- (void).cxx_destruct;
- (void)_avatarDownloadedWithImage:(id)arg1 forSnapchatter:(id)arg2;
- (id)_fallbackImage:(id)arg1;
- (void)_downloadAvatar:(id)arg1;
- (void)_setSnapchatters:(id)arg1;
- (id)viewModel;
- (void)handleAction:(id)arg1;
- (void)begin;
- (id)initWithDelegate:(id)arg1 snapchattersDataFetcher:(id)arg2 bitmojiSelfieFetcher:(id)arg3;

@end

