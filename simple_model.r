
simple_model <- function(Var1, Var2, Var3, Var4, Var5, Var6, Var7, Var8, Var9, Var10) {
  
  # handle some internal calculations
  Expression1 <- Var1 * 0.336218764
  Expression2 <- Var2 * 0.75222251
  Expression3 <- Var3 * 0.358511648
  Expression4 <- Var4 * 0.916881328
  Expression5 <- Var5 * 0.968932684
  Expression6 <- Var6 * 0.100469201
  Expression7 <- Var7 * 0.008698836
  Expression8 <- Var8 * 0.980040676
  Expression9 <- Var9 * 0.36560712
  Expression10 <- Var10 * 0.716986761    
  
  # evaluate outputs
  Output1 <- Expression1 + Expression2 + Expression3 
  Output2 <- Expression4 + Expression5 + Expression6
  Output3 <- Expression7 + Expression8
  Output4 <- Expression9 
  Output5 <- Expression10
  
  return <- list(Output1=Output1, Output2=Output2, Output3=Output3, Output4=Output4, Output5=Output5)
  
}