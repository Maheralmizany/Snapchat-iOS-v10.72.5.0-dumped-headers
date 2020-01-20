//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatInputFeatureRepresentable.h"

@class SCChatInputFeatureType, SCChatInputItem;

@interface SCChatInputMediaFeature : NSObject <SCChatInputFeatureRepresentable>
{
    SCChatInputFeatureType *_featureType;
    SCChatInputItem *_inputItem;
}

@property(readonly, nonatomic) SCChatInputItem *inputItem; // @synthesize inputItem=_inputItem;
@property(readonly, nonatomic) SCChatInputFeatureType *featureType; // @synthesize featureType=_featureType;
- (void).cxx_destruct;
- (id)initWithUserSession:(id)arg1 mediaSender:(id)arg2 parameterProvider:(id)arg3 snapSendPreparer:(id)arg4 delegate:(id)arg5;

@end

