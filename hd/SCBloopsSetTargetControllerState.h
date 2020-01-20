//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface SCBloopsSetTargetControllerState : NSObject
{
    _Bool _successUpdateTarget;
    _Bool _successShowTargetValidationAnimation;
    _Bool _successSelectGender;
    unsigned long long _genderType;
    id <SPPersonProcessor> _personProcessor;
    NSArray *_hairStyles;
}

+ (id)defaultState;
@property(readonly, nonatomic) NSArray *hairStyles; // @synthesize hairStyles=_hairStyles;
@property(readonly, nonatomic) id <SPPersonProcessor> personProcessor; // @synthesize personProcessor=_personProcessor;
@property(readonly, nonatomic) unsigned long long genderType; // @synthesize genderType=_genderType;
@property(readonly, nonatomic) _Bool successSelectGender; // @synthesize successSelectGender=_successSelectGender;
@property(readonly, nonatomic) _Bool successShowTargetValidationAnimation; // @synthesize successShowTargetValidationAnimation=_successShowTargetValidationAnimation;
@property(readonly, nonatomic) _Bool successUpdateTarget; // @synthesize successUpdateTarget=_successUpdateTarget;
- (void).cxx_destruct;
- (id)initWithPersonProcessor:(id)arg1 genderType:(unsigned long long)arg2 successUpdateTarget:(_Bool)arg3 successShowTargetValidationAnimation:(_Bool)arg4 successSelectGender:(_Bool)arg5 hairStyles:(id)arg6;

@end
