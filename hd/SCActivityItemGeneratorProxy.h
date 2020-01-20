//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActivityItemGenerating.h"
#import "SCActivityItemGeneratingDelegate.h"

@class NSString, SCQueuePerformer;

@interface SCActivityItemGeneratorProxy : NSObject <SCActivityItemGeneratingDelegate, SCActivityItemGenerating>
{
    id <SCActivityItemGenerating> _generator;
    SCQueuePerformer *_performer;
    float _progress;
    unsigned long long _itemCount;
    id _item;
    NSString *_itemId;
    id <SCActivityItemGeneratingDelegate> _delegate;
}

@property(nonatomic) __weak id <SCActivityItemGeneratingDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(readonly, nonatomic) id item; // @synthesize item=_item;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) unsigned long long itemCount; // @synthesize itemCount=_itemCount;
- (void).cxx_destruct;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)activityItemGenerator:(id)arg1 didUpdateProgress:(float)arg2;
- (void)activityItemGenerator:(id)arg1 didFailGeneratingItemWithError:(id)arg2 itemId:(id)arg3;
- (void)activityItemGenerator:(id)arg1 didGenerateItem:(id)arg2 itemId:(id)arg3;
- (id)generatePlaceholderItem;
- (void)cancel;
- (void)generateThumbnailForExport:(CDUnknownBlockType)arg1;
- (void)generateItem;
- (id)initWithGenerator:(id)arg1 performer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

