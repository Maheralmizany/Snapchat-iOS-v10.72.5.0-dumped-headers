//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSPointerArray, NSString, SCOperaPage;

@interface SCOperaViewModel : NSObject
{
    NSString *_pageClearReason;
    NSPointerArray *_triggerPoints;
    SCOperaPage *_page;
    SCOperaViewModel *_left;
    SCOperaViewModel *_top;
    SCOperaViewModel *_right;
    SCOperaViewModel *_bottom;
    SCOperaViewModel *_previous;
    SCOperaViewModel *_next;
    NSString *_pageID;
}

+ (id)dismissViewModel;
+ (id)viewModelWithPage:(id)arg1;
+ (id)viewModelWithProperties:(id)arg1;
+ (id)verticalViewModelsWithViewModel:(id)arg1;
+ (id)horizontalViewModelsWithViewModel:(id)arg1;
@property(readonly, copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
@property(nonatomic) __weak SCOperaViewModel *next; // @synthesize next=_next;
@property(nonatomic) __weak SCOperaViewModel *previous; // @synthesize previous=_previous;
@property(nonatomic) __weak SCOperaViewModel *bottom; // @synthesize bottom=_bottom;
@property(nonatomic) __weak SCOperaViewModel *right; // @synthesize right=_right;
@property(nonatomic) __weak SCOperaViewModel *top; // @synthesize top=_top;
@property(nonatomic) __weak SCOperaViewModel *left; // @synthesize left=_left;
@property(retain, nonatomic) SCOperaPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
- (id)triggerPoints;
- (void)addTriggerPoints:(id)arg1;
- (void)clearPageWithReason:(id)arg1;
- (id)description;
- (id)_initWithPage:(id)arg1;

@end

