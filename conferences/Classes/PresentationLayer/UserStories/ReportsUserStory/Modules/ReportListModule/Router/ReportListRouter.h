//
//  ReportListRouter.h
//  Conferences
//
//  Created by Karpushin Artem on 08/11/15.
//  Copyright 2015 Rambler. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <ViperMcFlurry/ViperMcFlurry.h>
#import "ReportListRouterInput.h"

@interface ReportListRouter : NSObject<ReportListRouterInput>

@property (strong, nonatomic) id <RamblerViperModuleTransitionHandlerProtocol> transitionHandler;

@end