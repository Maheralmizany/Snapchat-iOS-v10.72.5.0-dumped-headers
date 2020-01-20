//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSearchSectionCreating.h"

@class NSSet, NSString, SCLazy, SCSelectionTracker;

@interface SCSnapchatterSelectionSectionCreator : NSObject <SCSearchSectionCreating>
{
    NSSet *_sectionIdentifiers;
    SCLazy *_snapchatterSectionDataSource;
    SCSelectionTracker *_selectionTracker;
    id <SCImageDownloading> _imageDownloader;
    SCLazy *_viewModelSource;
    id <SCActionHandling> _actionHandler;
}

- (void).cxx_destruct;
- (id)_snapchatterSectionForIdentifier:(id)arg1 withTitle:(id)arg2;
- (id)sectionForDescriptor:(id)arg1;
- (id)initWithSectionIdentifiers:(id)arg1 snapchatterSectionDataSource:(id)arg2 selectionTracker:(id)arg3 actionHandler:(id)arg4 imageDownloader:(id)arg5 viewModelSource:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
