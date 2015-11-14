//
//  EventListRouter.h
//  Conferences
//
//  Created by Karpushin Artem on 12/10/15.
//  Copyright 2015 Rambler. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ViperMcFlurry/ViperMcFlurry.h>
#import "EventListRouterInput.h"

@interface EventListRouter : NSObject<EventListRouterInput>

@property (strong, nonatomic) id <RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end