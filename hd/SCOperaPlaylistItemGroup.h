//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, SCOperaPlaylistItem;

@interface SCOperaPlaylistItemGroup : NSObject
{
    _Bool _swipeToDismissEnabled;
    _Bool _rightAutoAdvanceEnabled;
    _Bool _leftAutoAdvanceEnabled;
    _Bool _loopToFirstItemEnabled;
    _Bool _recommended;
    _Bool _lockedForResolution;
    NSString *_type;
    NSString *__id;
    NSArray *_items;
    SCOperaPlaylistItem *_currentItem;
    NSString *_featureName;
    NSString *_context;
}

@property(nonatomic) _Bool lockedForResolution; // @synthesize lockedForResolution=_lockedForResolution;
@property(readonly, copy, nonatomic) NSString *context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property(nonatomic) _Bool recommended; // @synthesize recommended=_recommended;
@property(retain, nonatomic) SCOperaPlaylistItem *currentItem; // @synthesize currentItem=_currentItem;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) _Bool loopToFirstItemEnabled; // @synthesize loopToFirstItemEnabled=_loopToFirstItemEnabled;
@property(nonatomic) _Bool leftAutoAdvanceEnabled; // @synthesize leftAutoAdvanceEnabled=_leftAutoAdvanceEnabled;
@property(nonatomic) _Bool rightAutoAdvanceEnabled; // @synthesize rightAutoAdvanceEnabled=_rightAutoAdvanceEnabled;
@property(nonatomic) _Bool swipeToDismissEnabled; // @synthesize swipeToDismissEnabled=_swipeToDismissEnabled;
@property(readonly, copy, nonatomic) NSString *_id; // @synthesize _id=__id;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)_playlistItemsFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (id)playlistItemsOfLength:(long long)arg1;
- (void)insertItem:(id)arg1 afterItem:(id)arg2;
- (void)unresolveGroup;
- (void)resolveGroupWithItems:(id)arg1 currentItem:(id)arg2;
- (void)resolveGroupWithItems:(id)arg1;
- (unsigned long long)indexOfItem:(id)arg1;
- (id)initWithID:(id)arg1 type:(id)arg2 featureName:(id)arg3 context:(id)arg4 swipeToDismissEnabled:(_Bool)arg5 rightAutoAdvanceEnabled:(_Bool)arg6 leftAutoAdvanceEnabled:(_Bool)arg7 loopToFirstItemEnabled:(_Bool)arg8;

@end

