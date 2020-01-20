//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCChatBaseSnapOperaDataSource.h"

#import "SCChatConversationMetadataUpdaterListener.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SCLazy, SCOperaViewModel, SCUserSession;

@interface SCChatMediaMessageV3OperaDataSource : SCChatBaseSnapOperaDataSource <SCChatConversationMetadataUpdaterListener>
{
    NSMutableArray *_viewModels;
    NSMutableArray *_auxilliaryViewModels;
    NSMutableDictionary *_viewModelDictionary;
    NSString *_messageId;
    id <SCChatRenderingMessage> _message;
    NSMutableSet *_removedPageIds;
    SCUserSession *_userSession;
    SCLazy *_snapCountDownManager;
    _Bool _isGroupConversation;
    _Bool _shouldEnableZoom;
    _Bool _containsMultipleMedias;
    _Bool _needToAnimationBaseThumbnailViewWhenClosing;
    NSString *_conversationId;
    long long _messageType;
    SCOperaViewModel *_rootViewModel;
    id <SCOperaGifProvider><SCOperaImageProvider> _imageProvider;
}

+ (long long)_indexOfChatMediaContentWithMediaId:(id)arg1 inBatchedMediaMessage:(id)arg2;
+ (id)_totalDurationForMediaList:(id)arg1;
+ (id)_operaTimerLayerShapeForMessage:(id)arg1;
- (id)imageProvider;
- (void)setRootViewModel:(id)arg1;
- (id)rootViewModel;
- (_Bool)needToAnimationBaseThumbnailViewWhenClosing;
- (_Bool)containsMultipleMedias;
- (_Bool)shouldEnableZoom;
- (long long)messageType;
- (_Bool)isGroupConversation;
- (id)conversationId;
- (void).cxx_destruct;
- (id)actionHandler;
- (long long)initialMediaType;
- (void)conversationDidUpdate:(id)arg1 metadata:(id)arg2;
- (void)_unarchiveStorySnapContentIfNecessary:(id)arg1 message:(id)arg2;
- (void)_unarchiveMediaContentIfNecessary:(id)arg1 mediaMetadata:(id)arg2;
- (void)prefetchMediasInsideBatchedMediaMessageAfterMediaId:(id)arg1;
- (void)_updateAuxilliaryViewModels:(id)arg1;
- (void)_updateViewModelForStorySnapContent:(id)arg1 message:(id)arg2;
- (_Bool)isViewModelRemovedForPageId:(id)arg1;
- (void)removeViewModelByPageId:(id)arg1;
- (void)updateViewModelForMedia:(id)arg1 mediaMetadata:(id)arg2;
- (id)viewModelForPageId:(id)arg1;
- (id)messageIdForPage:(id)arg1;
- (void)setRootIndex:(unsigned long long)arg1;
- (void)_initViewModelsWithStorySnapMediaContent:(id)arg1 message:(id)arg2;
- (void)_initViewModelsWithMessageV3:(id)arg1 messageMetadata:(id)arg2;
- (id)initWithMessage:(id)arg1 messageMetadata:(id)arg2 isGroupConversation:(_Bool)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

