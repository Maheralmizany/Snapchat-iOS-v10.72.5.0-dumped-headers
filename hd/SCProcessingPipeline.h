//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCProcessingModule.h"

@class NSArray, NSMutableSet, NSString;

@interface SCProcessingPipeline : NSObject <SCProcessingModule>
{
    _Bool _shouldUpdateOrderedModules;
    NSArray *_orderedModules;
    id <SCProcessingPipelineOrdering> _pipelineOrder;
    NSMutableSet *_processingModulesSet;
}

@property(nonatomic) _Bool shouldUpdateOrderedModules; // @synthesize shouldUpdateOrderedModules=_shouldUpdateOrderedModules;
@property(retain, nonatomic) NSMutableSet *processingModulesSet; // @synthesize processingModulesSet=_processingModulesSet;
@property(retain, nonatomic) id <SCProcessingPipelineOrdering> pipelineOrder; // @synthesize pipelineOrder=_pipelineOrder;
@property(retain, nonatomic) NSArray *orderedModules; // @synthesize orderedModules=_orderedModules;
- (void).cxx_destruct;
- (void)_removeModuleEqualTo:(id)arg1;
- (void)_buildOrderedPipelineIfNecessary;
- (struct opaqueCMSampleBuffer *)render:(struct RenderData)arg1;
@property(readonly, nonatomic) NSArray *renderPipeline;
- (void)removeProcessingModule:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)addProcessingModule:(id)arg1;
- (id)initWithPipelineOrder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

