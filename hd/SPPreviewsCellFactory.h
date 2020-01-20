//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReusableViewFactory.h"

#import "AnimatedReusableViewFactory.h"

@class NSString, ReusableViewFactory<AnimatedReusableViewFactory>;

@interface SPPreviewsCellFactory : ReusableViewFactory <AnimatedReusableViewFactory>
{
    ReusableViewFactory<AnimatedReusableViewFactory> *_concreteFactory;
}

@property(retain, nonatomic) ReusableViewFactory<AnimatedReusableViewFactory> *concreteFactory; // @synthesize concreteFactory=_concreteFactory;
- (void).cxx_destruct;
- (void)setupView:(id)arg1 animated:(_Bool)arg2;
- (void)setupView:(id)arg1;
- (id)identifier;
- (id)initWithData:(id)arg1 playableOutput:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

